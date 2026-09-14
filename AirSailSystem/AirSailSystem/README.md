# AirSailSystem

一个基于 Qt Widgets 和 C++ 实现的桌面航空票务管理系统。项目围绕航班查询、机票预订和订单管理设计，提供完整的用户登录流程和基于历史订单的航班推荐功能，适合作为 Qt/C++、GUI 开发和数据库应用课程项目的示例。

## 项目亮点

- 使用 Qt Widgets 构建桌面端图形用户界面
- 支持用户注册、登录和账户信息维护
- 按出发城市、到达城市和出发日期查询航班
- 查询无结果时，自动在前后日期范围内继续检索
- 支持交换出发地与目的地，减少重复输入
- 支持选择航班并创建机票订单
- 提供订单列表和订单状态管理
- 根据用户历史订单推荐最多 10 条航班信息
- 使用 Qt Resource System 管理图标、样式表和界面资源
- 用户密码使用随机盐值和 SHA-256 进行摘要存储

## 功能模块

| 模块 | 说明 |
| --- | --- |
| 用户认证 | 用户注册、登录、密码输入隐藏、记住密码选项 |
| 航班查询 | 根据出发地、目的地和日期检索航班详情 |
| 智能检索 | 当前日期没有航班时，自动向前后日期扩展搜索 |
| 机票预订 | 从查询结果中选择航班并生成订单 |
| 订单管理 | 查看当前用户订单，并处理订单状态变更 |
| 航班推荐 | 结合用户历史订单中的出发地和目的地推荐航班 |
| 账户设置 | 修改用户邮箱和密码等账户信息 |

## 技术栈

- **开发语言**：C++17
- **GUI 框架**：Qt Widgets
- **数据访问**：Qt SQL
- **数据库**：MySQL 8.x
- **数据库驱动**：Qt ODBC（项目当前配置）
- **项目构建**：qmake
- **界面资源**：Qt Designer `.ui`、Qt Resource `.qrc`、Qt Style Sheet

## 目录结构

```text
AirSailSystem/
├── AirlineSystem/
│   ├── *.cpp / *.h              # C++ 业务逻辑与窗口类
│   ├── *.ui                     # Qt Designer 界面文件
│   ├── AirlineSystem.pro        # qmake 项目文件
│   ├── DataStruct.h             # 航班和订单数据结构
│   ├── database.cpp / .h        # 数据库访问与业务查询
│   ├── Resource.qrc              # Qt 资源清单
│   └── Resource/                 # 图标和样式资源
├── airlinedata.sql               # 数据库表结构和示例航班数据
└── AirlineSystem.pptx            # 项目演示材料
```

## 环境要求

- Windows 10 或更高版本
- Qt 5.15+ 或 Qt 6.x
- Qt Creator
- C++17 编译器，例如 MSVC 2019+ 或 MinGW-w64
- MySQL Server 8.x
- 与 Qt 版本、编译器架构一致的 Qt ODBC SQL Driver

## 数据库配置

项目的数据库连接参数位于 `AirlineSystem/database.cpp` 的 `DataBase::openDb()` 中。当前代码使用以下连接方式：

```text
Driver:     QODBC
Host:       127.0.0.1
Port:       3306
Database:   users
Username:   <your-database-user>
Password:   <your-database-password>
```

建议在运行项目前完成以下操作：

1. 在 MySQL 中创建项目使用的数据库。
2. 执行 `airlinedata.sql`，导入航班、城市和用户相关表结构及示例数据。
3. 创建具有相应权限的数据库用户，或修改 `database.cpp` 中的连接参数。
4. 确认系统已安装并启用 Qt 的 ODBC 驱动。
5. 不要将真实数据库密码提交到公开仓库，建议改为从环境变量或本地配置文件读取。

> 注意：示例 SQL 文件和当前源码中的数据库名称需要保持一致。首次部署时请根据本地 MySQL 配置调整 `openDb()` 参数。

## 构建与运行

### 使用 Qt Creator

1. 使用 Qt Creator 打开 `AirlineSystem/AirlineSystem.pro`。
2. 选择已安装的 Qt Kit，并确认编译器架构与 ODBC 驱动一致。
3. 配置数据库连接并导入 `airlinedata.sql`。
4. 选择 Debug 或 Release 构建配置。
5. 构建并运行项目。

### 使用命令行

在 `AirlineSystem` 目录执行：

```bash
qmake AirlineSystem.pro

# Linux / macOS
make -j2
./AirlineSystem

# Windows MinGW
mingw32-make -j2
AirlineSystem.exe
```

使用 MSVC 时，请在对应的 **Developer Command Prompt** 中运行 `qmake`，然后使用 `nmake` 构建。Windows 下运行程序时，还需要确保 Qt 动态库、SQL 模块和 ODBC 驱动位于系统可搜索路径中。

## 使用流程

1. 启动程序后注册新用户，或使用已有账户登录。
2. 在航班查询页面选择出发城市、到达城市、日期和人数。
3. 点击查询，查看航班号、机型、起降时间、机场、航司、准点率和价格等信息。
4. 选择合适的航班并确认预订。
5. 在订单管理页面查看订单，并根据界面提供的操作更新订单状态。
6. 进入推荐页面查看基于历史订单生成的航班推荐。

## 项目说明

本项目是本地桌面端演示系统，数据库中的航班信息为示例数据。项目当前重点覆盖航班信息检索、订单数据流转和 GUI 交互，不连接航空公司生产系统，也不代表真实支付、出票、退改签或实时库存能力。

## 后续改进方向

- 将数据库连接信息迁移到环境变量或独立配置文件
- 使用参数化 SQL 查询，降低 SQL 注入风险
- 增加更细粒度的航班筛选、排序和座位库存校验
- 完善订单支付、出票、退票和改签业务流程
- 增加跨平台构建配置和自动化测试
- 清理提交到仓库中的构建产物、调试文件和 IDE 缓存

## License

本项目暂未声明开源许可证。如需公开分发或允许他人修改、复用，请补充合适的 License 文件。

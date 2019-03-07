## Frp Client Framework for iOS

#### 用于远程管理IOS设备, 比如远程VNC控制手机,远程SSH连接手机等(由于IOS机制限制,非越狱时只能代理当前APP,越狱后才能获得完整手机控制权)


#### API说明:
```
// 两个参数, 分别为配置文件路径, frp加密salt(默认为frp)
extern void FrpClientFrpc_main(NSString* cfgFile, NSString* salt);

// 如果使用官方Release的frp服务端,则调用代码为
FrpClientFrpc_main(@"app/config.ini", @"frp");
```

#### 配置文件样例(远程映射SSH)
```
# frpc.ini
[common]
server_addr = x.x.x.x(服务端地址)
server_port = 7000(服务端端口)

[ssh]
type = tcp
local_ip = 127.0.0.1
local_port = 22
remote_port = 6000(映射后的ssh端口)
```

> 映射后使用 `ssh root@x.x.x.x -p 6000` 进行连接


#### 如果觉得对你有帮助,可以酌情赏个铜板~~
### Alipay
![Alipay](Alipay.png)

### WeChat
![WeChat](WeChat.png)


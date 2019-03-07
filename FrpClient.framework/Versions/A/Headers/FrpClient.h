#import <Foundation/Foundation.h>

// 两个参数, 分别为配置文件路径, frp加密salt(默认为frp)
// arg1: config file path
// arg2: frp salt(default: frp)
// eg: FrpClientFrpc_main(@"app/config.ini", @"frp");

extern void FrpClientFrpc_main(NSString* cfgFile, NSString* salt);


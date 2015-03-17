//
//  AppDelegate.m
//  TestSCPageVC
//
//  Created by DongYiming on 15/3/17.
//  Copyright (c) 2015年 DongYiming. All rights reserved.
//

#import "AppDelegate.h"
#import "SCRootViewController.h"

@interface AppDelegate ()

@end

@implementation AppDelegate


- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
    self.window = [[UIWindow alloc] initWithFrame:[[UIScreen mainScreen] bounds]];
    self.window.rootViewController = [[SCRootViewController alloc] initWithNibName:NSStringFromClass([SCRootViewController class]) bundle:nil];
    [self.window makeKeyAndVisible];
    return YES;
}



@end

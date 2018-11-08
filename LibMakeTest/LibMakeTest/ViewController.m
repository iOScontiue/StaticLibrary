//
//  ViewController.m
//  LibMakeTest
//
//  Created by 卢育彪 on 2018/11/8.
//  Copyright © 2018年 luyubiao. All rights reserved.
//

#import "ViewController.h"
#import "StaticLibMake.h"
#import "AlertViewManager.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    UIButton *btn = [[UIButton alloc] initWithFrame:CGRectMake(0, 0, 100, 100)];
    btn.center = self.view.center;
    btn.backgroundColor = [UIColor cyanColor];
    [btn setTitle:@"Test" forState:UIControlStateNormal];
    [btn addTarget:self action:@selector(testClick) forControlEvents:UIControlEventTouchUpInside];
    [self.view addSubview:btn];
}

- (void)testClick
{
    NSLog(@".a test----%@", [StaticLibMake fetchStrWithSourceStr:@"juhynth" followStr:@"yn"]);
    [AlertViewManager popAlertViewWithTitle:@"alert" cancel:@"Cancel" confirm:@"Done" message:@"frameworkLib test" preferredStyle:UIAlertControllerStyleAlert target:self confirmBlock:^{
        [self dismissViewControllerAnimated:YES completion:nil];
    }];
}

@end

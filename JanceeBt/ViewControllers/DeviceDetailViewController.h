//
//  DeviceDetailViewController.h
//  JanceeBt
//
//  Created by jancee wang on 2016/11/28.
//  Copyright © 2016年 Wang Jingxi. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DeviceDetailViewController : UIViewController
<
UITableViewDelegate,
UITableViewDataSource
>

@property (nonatomic, strong) JXBTDeviceSearched *deviceItem;

@end

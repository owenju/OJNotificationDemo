//
//  NotificationWindow.h
//  ThreadDemo
//
//  Created by Juwencheng on 24/06/2017.
//  Copyright © 2017 Owen Ju. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef enum : NSUInteger {
    OJNotificationPresentStateNone,     ///< 没有展示过一次
    OJNotificationPresentStateShowing,  ///< 正在展示中
    OJNotificationPresentStateHiding,   ///< 正在结束动画
    OJNotificationPresentStateFinished, ///< 展示完成，处于隐藏状态
} OJNotificationPresentState;

@interface OJNotificationWindow : UIWindow

+ (void)showNotificationWithModel:(NSDictionary *)model;

+ (void)dismissNotification ;

@end
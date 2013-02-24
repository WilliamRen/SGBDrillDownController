//
//  SGBDrillDownController.h
//  SGBDrillDownControllerDemo
//
//  Created by Simon Booth on 23/02/2013.
//  Copyright (c) 2013 Simon Booth. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SGBDrillDownController : UIViewController

@property (nonatomic, assign, readonly) Class navigationBarClass;
@property (nonatomic, assign, readonly) Class toolbarClass;
- (id)initWithNavigationBarClass:(Class)navigationBarClass toolbarClass:(Class)toolbarClass;

@property (nonatomic, strong, readonly) UINavigationBar *leftNavigationBar;
@property (nonatomic, strong, readonly) UINavigationBar *rightNavigationBar;

@property (nonatomic, strong, readonly) NSArray *viewControllers;
@property (nonatomic, strong, readonly) UIViewController *leftViewController;
@property (nonatomic, strong, readonly) UIViewController *rightViewController;

- (void)pushViewController:(UIViewController *)viewController animated:(BOOL)animated completion:(void(^)(void))completion;
- (UIViewController *)popViewControllerAnimated:(BOOL)animated completion:(void(^)(void))completion;

@property (nonatomic, assign) CGFloat leftControllerWidth;

@end

@interface UIViewController (SGBDrillDownController)

@property (nonatomic, strong, readonly) SGBDrillDownController *drillDownController;

@end
//
//  SCMainViewController.h
//  SCPageViewController
//
//  Created by Stefan Ceriu on 15/02/2014.
//  Copyright (c) 2014 Stefan Ceriu. All rights reserved.
//

#import "SCEasingFunction.h"

typedef enum {
    SCPageLayouterTypePlain,
    SCPageLayouterTypeSliding,
    SCPageLayouterTypeParallax,
    SCPageLayouterTypeFacebookPaper,
    SCPageLayouterTypeCount
} SCPageLayouterType;

@protocol SCMainViewControllerDelegate;

@interface SCMainViewController : UIViewController

@property (nonatomic, weak, readonly) UILabel *pageNumberLabel;
@property (nonatomic, weak, readonly) UILabel *visiblePercentageLabel;

@property (nonatomic, weak) IBOutlet id<SCMainViewControllerDelegate> delegate;

@property (nonatomic, assign) SCPageLayouterType layouterType;
@property (nonatomic, assign) SCEasingFunctionType easingFunctionType;
@property (nonatomic, assign) NSTimeInterval duration;

@end

@protocol SCMainViewControllerDelegate <NSObject>

- (void)mainViewControllerDidChangeLayouterType:(SCMainViewController *)mainViewController;

- (void)mainViewControllerDidChangeAnimationType:(SCMainViewController *)mainViewController;

- (void)mainViewControllerDidChangeAnimationDuration:(SCMainViewController *)mainViewController;

- (void)mainViewControllerDidRequestNavigationToPreviousPage:(SCMainViewController *)mainViewController;

- (void)mainViewControllerDiDRequestNavigationToNextPage:(SCMainViewController *)mainViewController;

@end

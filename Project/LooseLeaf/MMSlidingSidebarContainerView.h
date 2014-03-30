//
//  MMSlidingSidebarView.h
//  LooseLeaf
//
//  Created by Adam Wulf on 3/27/14.
//  Copyright (c) 2014 Milestone Made, LLC. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MMSidebarButton.h"
#import "MMSlidingSidebarView.h"
#import "MMSlidingSidebarContainerViewDelegate.h"

@interface MMSlidingSidebarContainerView : UIView<MMSlidingSidebarContainerViewDelegate>{
    MMSlidingSidebarView* sidebarContentView;
    __weak NSObject<MMSlidingSidebarContainerViewDelegate>* delegate;
}

@property (nonatomic, weak) NSObject<MMSlidingSidebarContainerViewDelegate>* delegate;

- (id)initWithFrame:(CGRect)frame forButton:(MMSidebarButton*)_button animateFromLeft:(BOOL)fromLeft;

-(BOOL) isVisible;

-(void) hide:(BOOL)animated;

-(void) show:(BOOL)animated;

@end
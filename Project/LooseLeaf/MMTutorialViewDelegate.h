//
//  MMTutorialViewDelegate.h
//  LooseLeaf
//
//  Created by Adam Wulf on 2/23/15.
//  Copyright (c) 2015 Milestone Made, LLC. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MMRoundedSquareViewDelegate.h"

@protocol MMTutorialViewDelegate <MMRoundedSquareViewDelegate>

- (void)userIsViewingTutorialStep:(NSInteger)stepNum;

- (void)didFinishTutorial;

@end

//
//  BLRGameScreenAnimation.h
//  Bowlr
//
//  Created by Daniel Stewart on 3/14/17.
//  Copyright © 2017 Daniel Stewart. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol BLRGameScreenAnimation <NSObject>

- (void)animateToPinScreen;
- (void)animateToNumberPadScreen;

@end

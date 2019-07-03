//
//  AYCardController.h
//  DeckOfCards27ObjC
//
//  Created by Albert Yu on 7/2/19.
//  Copyright © 2019 AlbertLLC. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Card.h"

NS_ASSUME_NONNULL_BEGIN

@interface AYCardController : NSObject
+(void) fetchCard: (void(^) (Card *)) completion;
//+(void) getImageFor: (Card *)card completion: (void(^) (UIImage *)) completion;
@end

NS_ASSUME_NONNULL_END

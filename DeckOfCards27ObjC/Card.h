//
//  Card.h
//  DeckOfCards27ObjC
//
//  Created by Albert Yu on 7/2/19.
//  Copyright © 2019 AlbertLLC. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface Card : NSObject

@property(nonatomic, copy, readonly) NSString *suit;
@property(nonatomic, copy, readonly) NSString *value;
@property(nonatomic, copy, readonly) NSString *code;
@property(nonatomic, copy, readonly) NSString *image;

- (instancetype) initWithSuit: (NSString *) suit
                        value: (NSString *) value
                         code: (NSString *) code
                        image: (NSString *) image;
@end

@interface Card (JSONConvertible) //JsonConvertible named such because it is the goal
-(instancetype) initWithDictionary:(NSDictionary<NSString *, id> *)dictionary;
// init(with dictionary: [String: Any]) {

@end

NS_ASSUME_NONNULL_END

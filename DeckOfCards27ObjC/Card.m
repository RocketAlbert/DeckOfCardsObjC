//
//  Card.m
//  DeckOfCards27ObjC
//
//  Created by Albert Yu on 7/2/19.
//  Copyright © 2019 AlbertLLC. All rights reserved.
//

#import "Card.h"

@implementation Card
-(instancetype)initWithSuit:(NSString *)suit value:(NSString *)value code:(NSString *)code image:(NSString *)image {
    self = [super init];
    if (self) {
        _suit = suit;
        _value = value;
        _code = code;
        _image = image;
        
    }
    return self;

}
@end

@implementation Card (JSONConvertible)

- (instancetype)initWithDictionary:(NSDictionary<NSString *,id> *)dictionary {
    NSArray *cardsDict = dictionary[@"cards"];
    
    NSDictionary *dict = cardsDict.firstObject;
    
        NSString * suit = dict[@"suit"];
        NSString * value = dict[@"value"];
        NSString * code = dict[@"code"];
        NSString * image = dict[@"image"];
    
    Card *card = [[Card alloc] initWithSuit:suit value:value code:code image:image];
    return card;
}


@end

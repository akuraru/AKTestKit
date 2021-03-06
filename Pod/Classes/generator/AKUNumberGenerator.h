//
// Created by P.I.akura on 2013/07/31.
// Copyright (c) 2013 P.I.akura. All rights reserved.
//
// To change the template use AppCode | Preferences | File Templates.
//


#import <Foundation/Foundation.h>

@interface AKUNumberGenerator : NSObject

+ (NSArray *)randomArrayWithPiece:(NSUInteger)piece;

+ (NSMutableArray *)arrayWithPiece:(NSUInteger)piece;

+ (NSInteger)between:(NSInteger)begin end:(NSInteger)end;

+ (NSNumber *)boolean;

+ (double)doubleBetween:(double)from and:(double)to;
@end
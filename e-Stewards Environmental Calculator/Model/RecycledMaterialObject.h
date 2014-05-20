//
//  RecycledMaterialObject.h
//  e-Stewards Environmental Calculator
//
//  Created by Angelo Godbey on 5/19/14.
//  Copyright (c) 2014 Basel Action Network. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface RecycledMaterialObject : NSObject

@property (nonatomic, retain) NSString *material;

@property double totalWeight;

@property double carbonDioxideConstant;
@property double leadConstant;
@property double mercuryConstant;
@property double cadmiumConstant;
@property double arsenicConstant;
@property double copperConstant;
@property double goldConstant;
@property double platinumConstant;
@property double alluminumConstant;
@property double steelConstant;

@property double carbonDioxideTotalWeight;
@property double leadTotalWeight;
@property double mercuryTotalWeight;
@property double cadmiumTotalWeight;
@property double arsenicTotalWeight;
@property double copperTotalWeight;
@property double goldTotalWeight;
@property double platinumTotalWeight;
@property double alluminumTotalWeight;
@property double steelTotalWeight;

@property double greenHouseGasEmmisionsToal;

@end
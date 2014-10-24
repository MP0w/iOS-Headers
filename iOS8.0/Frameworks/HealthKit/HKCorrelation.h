//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HealthKit/HKSample.h>

#import "NSSecureCoding.h"

@class HKCorrelationType, NSMutableDictionary, NSSet, NSUUID;

@interface HKCorrelation : HKSample <NSSecureCoding>
{
    NSMutableDictionary *_objects;
}

+ (BOOL)supportsSecureCoding;
+ (id)correlationWithType:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 objects:(id)arg4 metadata:(id)arg5;
+ (id)correlationWithType:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 objects:(id)arg4;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_validateConfiguration;
- (id)_allTypes;
- (void)_removeAllCorrelatedObjects;
- (BOOL)_containsObjects;
- (void)_filterCorrelatedObjectsWithFilterDictionary:(id)arg1;
- (id)objectsForType:(id)arg1;
- (void)_addCorrelatedObjects:(id)arg1;
- (void)_addCorrelatedObject:(id)arg1;
@property(readonly) HKCorrelationType *correlationType;
- (id)description;
@property(readonly, copy) NSSet *objects;
- (id)_init;

// Remaining properties
@property(readonly, getter=_UUID) NSUUID *UUID;

@end

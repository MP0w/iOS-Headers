//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface PDLocationMap : NSObject
{
    NSMutableDictionary *_locationsByUniqueID;
}

- (id)description;
- (id)locationsForUniqueID:(id)arg1;
- (void)insertLocation:(id)arg1 forUniqueID:(id)arg2;
- (void)dealloc;
- (id)init;

@end

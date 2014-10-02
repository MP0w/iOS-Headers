//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

#import "SAClientBoundCommand.h"

@class NSArray, NSString, SASyncAnchor;

@interface SASyncChunkDenied : SABaseClientBoundCommand <SAClientBoundCommand>
{
}

+ (id)chunkDeniedWithErrorCode:(int)arg1;
+ (id)chunkDeniedWithDictionary:(id)arg1 context:(id)arg2;
+ (id)chunkDenied;
- (BOOL)requiresResponse;
@property(nonatomic) int errorCode;
@property(retain, nonatomic) SASyncAnchor *current;
- (id)initWithErrorCode:(int)arg1;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(copy, nonatomic) NSString *aceId; // @dynamic aceId;
@property(copy, nonatomic) NSString *appId; // @dynamic appId;
@property(copy, nonatomic) NSArray *callbacks; // @dynamic callbacks;
@property(copy, nonatomic) NSString *refId; // @dynamic refId;

@end

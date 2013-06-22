/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <StoreServices/SSRequest.h>

#import "SSXPCCoding-Protocol.h"

@class NSData, NSNumber, NSString;

@interface SSMachineDataRequest : SSRequest <SSXPCCoding>
{
    NSNumber *_accountID;
    NSData *_actionData;
    NSString *_actionName;
}

- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (void)startWithCompletionBlock:(id)arg1;
@property(copy) NSString *actionName;
@property(copy) NSData *actionData;
@property(copy) NSNumber *accountIdentifier;
- (void)dealloc;
- (id)initWithURLResponse:(id)arg1;

@end

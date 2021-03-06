/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class AASetupAssistantService, ACAccountStore, NSArray, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_source>;

@interface AADelegateAccountSetupHelper : NSObject
{
    ACAccountStore *_accountStore;
    AASetupAssistantService *_aaService;
    NSArray *_delegatesToSetup;
    NSMutableArray *_pendingCompletionBundles;
    NSMutableDictionary *_assistantDelegates;
    id _handler;
    NSObject<OS_dispatch_source> *_delegatetimer;
}

- (void).cxx_destruct;
- (void)_completeiCloudAndDelegateSetupWithResponse:(id)arg1;
- (void)_setupDelegateAccountsWithEmailChoice:(id)arg1;
- (id)_adjustResponseDictionary:(id)arg1;
- (id)_loadAssistantDelegateBundles;
- (void)setupiCloudDelegateWithUsername:(id)arg1 password:(id)arg2 emailChoice:(id)arg3 withHandler:(id)arg4;
- (id)initWithStore:(id)arg1;
- (id)init;

@end


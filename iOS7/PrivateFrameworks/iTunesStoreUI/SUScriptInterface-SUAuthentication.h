/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iTunesStoreUI/SUScriptInterface.h>

@class NSArray, SUScriptAccount;

@interface SUScriptInterface (SUAuthentication)
@property(retain) SUScriptAccount *primaryLockerAccount;
@property(retain) SUScriptAccount *primaryAccount;
- (void)setAccounts:(id)arg1;
@property(readonly) NSArray *accounts;
- (id)makeAccount;
- (void)authenticateForAccount:(id)arg1 withOptions:(id)arg2;
- (id)accountForDSID:(id)arg1;
- (void)initAuthentication;
- (void)deallocAuthentication;
@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NetworkExtension/NEKeychainItem.h>

@interface NEIdentityKeychainItem : NEKeychainItem
{
}

+ (id)copyIdentities:(id)arg1 fromDomain:(int)arg2;
+ (id)copyPropertiesForIdentity:(struct __SecIdentity *)arg1 persistentReference:(id)arg2;
+ (id)copyPersistentReferenceForIdentity:(struct __SecIdentity *)arg1;
- (void)sync;
- (id)copyPassword;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)syncUsingConfiguration:(id)arg1 accountName:(id)arg2 passwordType:(int)arg3 identifierSuffix:(id)arg4;
- (id)initWithIdentifier:(id)arg1 domain:(int)arg2;
- (id)initWithPassword:(id)arg1 domain:(int)arg2;

@end

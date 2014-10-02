//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SSDownloadManagerObserver.h"

@class NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, SSAppPurchaseHistoryDatabase, SSDownloadManager, SSSoftwareUpdatesStore;

@interface SKUIItemStateCenter : NSObject <SSDownloadManagerObserver>
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    BOOL _appInstallRestricted;
    SSSoftwareUpdatesStore *_appUpdatesStore;
    BOOL _canAccessAppUpdates;
    BOOL _canAccessPurchaseHistory;
    SSDownloadManager *_downloadManager;
    NSMutableArray *_finishLoadBlocks;
    int _gratisState;
    int _loadCount;
    NSMutableDictionary *_itemStates;
    NSObject<OS_dispatch_queue> *_observerQueue;
    struct __CFArray *_observers;
    int _parentalControlsRank;
    SSAppPurchaseHistoryDatabase *_purchaseHistoryDatabase;
    BOOL _runningInStoreDemoMode;
}

+ (id)defaultCenter;
- (void).cxx_destruct;
- (void)_setStateFlag:(unsigned int)arg1 forOnlyItemsWithIdentifiers:(id)arg2;
- (void)_setPurchaseHistoryItemsWithIdentifiers:(id)arg1;
- (void)_setInstalledItems:(id)arg1;
- (void)_setGratisIdentifiers:(id)arg1 error:(id)arg2;
- (void)_setDownloads:(id)arg1;
- (void)_setAvailableUpdatesWithUpdates:(id)arg1;
- (void)_replacePurchasingItem:(id)arg1 withDownloadIDs:(id)arg2;
- (id)_removeState:(unsigned int)arg1 forItemIdentifier:(id)arg2;
- (void)_removePurchasingItemsForPurchases:(id)arg1;
- (void)_reloadSoftwareLibrary;
- (void)_reloadPurchaseHistory;
- (void)_reloadDownloadManager;
- (void)_reloadAppUpdatesStore;
- (id)_purchaseHistoryDatabase;
- (void)_performPurchases:(id)arg1 withClientContext:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_notifyObserversOfPurchasesResponses:(id)arg1;
- (void)_notifyObserversOfStateChanges:(id)arg1;
- (void)_notifyObserversOfRestrictionsChange;
- (void)_notifyObserversOfStateChange:(id)arg1;
- (id)_newPurchasesWithItems:(id)arg1;
- (id)_newPurchasesWithBundleItem:(id)arg1 bundleOffer:(id)arg2;
- (id)_newPurchaseWithItem:(id)arg1 offer:(id)arg2;
- (void)_fireFinishLoadBlocksIfNecessary;
- (id)_appUpdatesStore;
- (id)_addState:(unsigned int)arg1 forItemIdentifier:(id)arg2;
- (void)_updatesStoreChangeNotification:(id)arg1;
- (void)_restrictionsChangedNotification:(id)arg1;
- (void)_applicationDidEnterBackgroundNotification:(id)arg1;
- (void)downloadManagerDownloadsDidChange:(id)arg1;
- (void)downloadManager:(id)arg1 downloadStatesDidChange:(id)arg2;
- (void)reloadFromServerWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)getUpdatesWithCompletionBlock:(CDUnknownBlockType)arg1;
@property(readonly) SSSoftwareUpdatesStore *appUpdatesStore;
- (id)stateForItemWithIdentifier:(long long)arg1;
- (void)removeObserver:(id)arg1;
- (void)reloadGratisEligibilityWithBundleIdentifiers:(id)arg1 clientContext:(id)arg2;
- (void)reloadFromServer;
- (void)purchaseItems:(id)arg1 withClientContext:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)purchaseItems:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)purchaseItem:(id)arg1 offer:(id)arg2 clientContext:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)performActionForItem:(id)arg1 offer:(id)arg2 clientContext:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)performActionForItem:(id)arg1 clientContext:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)performActionForItem:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
@property(readonly) int parentalControlsRank;
- (id)metricsActionTypeForItem:(id)arg1;
@property(readonly, getter=isRunningInStoreDemoMode) BOOL runningInStoreDemoMode;
- (BOOL)isItemRestrictedWithParentalControlsRank:(int)arg1;
@property(readonly, nonatomic, getter=isGratisEligible) BOOL gratisEligible;
@property(readonly, getter=isApplicationInstallRestricted) BOOL applicationInstallRestricted;
- (void)finishLoadingWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)cancelDownloadForItemWithIdentifier:(long long)arg1;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)init;

@end

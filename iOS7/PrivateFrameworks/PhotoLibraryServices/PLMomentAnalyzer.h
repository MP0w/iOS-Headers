/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class CLLocation, GEOPlace, NSDate, NSDateFormatter, NSDictionary, NSMutableOrderedSet, NSMutableSet, NSObject<OS_dispatch_queue>, NSOrderedSet, NSString, PLMomentAnalyzerWorkThread, PLPhotoLibrary, PLXPCTransaction;

@interface PLMomentAnalyzer : NSObject
{
    NSObject<OS_dispatch_queue> *_workQueue;
    PLMomentAnalyzerWorkThread *_geoWorkThread;
    unsigned long long _mode;
    double _analysisStartTime;
    _Bool _delayedSavePending;
    unsigned long long _objectUpdatesSinceSave;
    PLXPCTransaction *_keepAliveTransaction;
    NSMutableOrderedSet *_pendingGEORequests;
    NSMutableSet *_activeGEORequests;
    NSMutableSet *_processingMomentUuids;
    NSMutableSet *_megaMomentListIdsToProcess;
    NSMutableSet *_yearMomentListIdsToProcess;
    NSDateFormatter *_shortDateFormatter;
    NSDateFormatter *_dayOfTheWeekDateFormatter;
    PLPhotoLibrary *_photoLibrary;
    _Bool _analyzingAllMoments;
    _Bool _passSuccess;
    void *_addressBook;
    unsigned long long _errorState;
    int _errorBackoffLevel;
    int _triesAtCurrentBackoffLevel;
    _Bool _networkObservingReachability;
    _Bool _needToUpdateInvalidMomentsWhenPossible;
    NSDictionary *_homeAddressDictionary;
    CLLocation *_homeLocation;
    GEOPlace *_homePlace;
    NSString *_languageAndLocale;
    NSString *_lastGeoProviderId;
    NSOrderedSet *_defaultDominantGeoOrderingForMoment;
    NSOrderedSet *_defaultSecondaryLocationGeoOrderingForMoment;
    NSOrderedSet *_defaultDominantGeoOrderingForMegaMoment;
    NSOrderedSet *_defaultSecondaryLocationGeoOrderingForMegaMoment;
    NSOrderedSet *_defaultSecondaryGeoOrderingForYear;
    double _lastNetworkForcedAbortTime;
    double _timeToWaitBeforeNextRequest;
    NSDate *_lastGeoVersionFileFetchDate;
    unsigned long long _lastGeoVersionFileVersion;
    NSDictionary *_serverVersionInfo;
    double _lastServerVersionInfoFetchAttemptTime;
    unsigned long long _currentRevGeoServerVersionNum;
    _Bool _pendingServerVersionInfoFetch;
    _Bool _addCountyIfNeeded;
    _Bool _noResultErrorIsSuccess;
    double _revGeoServerVersionInfoFetchNewVersionInterval;
    NSString *_revGeoServerVersionInfoURL;
}

+ (id)sharedInstance;
- (void)updateInfoForMomentListWithMomentListId:(id)arg1;
- (void)updateInfoForYearMomentLists:(id)arg1;
- (void)updateInfoForMegaMomentLists:(id)arg1;
- (void)updateInfoForMomentWithMomentId:(id)arg1 fromOnDemandRequest:(_Bool)arg2;
- (void)updateInfoForMoments:(id)arg1 invalidOnly:(_Bool)arg2;
- (void)updateInfoForInvalidMomentsIfNeeded;
- (void)updateInfoForAllMoments;
- (void)_reAnalyzeCachedDataAndProcessOnlyHomeChanges:(_Bool)arg1;
- (unsigned long long)_errorTypeForError:(id)arg1;
- (_Bool)_isNetworkReachable;
- (void)_stopObservingReachabilityChanges;
- (void)_startObservingReachabilityChanges;
- (void)_networkReachabilityDidChange:(id)arg1;
- (id)_localizedNamesForNameInfoArray:(id)arg1 namesUsed:(id)arg2 includeHome:(_Bool)arg3 outAddedHome:(_Bool *)arg4;
- (id)_simpleNamesForNameInfoArray:(id)arg1;
- (id)_dominantPlacesInPlaceInfoArray:(id)arg1 orderType:(unsigned long long)arg2 totalPlaceCount:(unsigned long long)arg3 includeAllPlaces:(_Bool)arg4 includeHome:(_Bool)arg5 homeAtEnd:(_Bool)arg6 atLastLevel:(_Bool)arg7 outOtherNonDominantPlaces:(id)arg8;
- (_Bool)_markInvalidLowQualityAssetsInMoment:(id)arg1;
- (void)_updateInfoForAllMomentsWithReAnalyzeType:(unsigned long long)arg1;
- (_Bool)_canProcessMoments;
- (void)_setLocationDataValidForMomentId:(id)arg1;
- (unsigned long long)_significantPlaceCountInMap:(id)arg1;
- (id)_resetAndSortedNameInfoArray:(id)arg1 homeAtEnd:(_Bool)arg2;
- (void)_updateSecondaryInfoInCompoundNameInfo:(id)arg1 withRevGeoPlaces:(id)arg2 primaryCompoundNameInfo:(id)arg3 defaultGeoOrderingSet:(id)arg4 dominantPlaces:(id)arg5 otherNonDominantPlaces:(id)arg6 ordersCheckedOrUsed:(id)arg7 dominantOrder:(unsigned long long)arg8 usedHome:(_Bool)arg9;
- (id)_suffixForNameInfoArray:(id)arg1 afterOrderType:(unsigned long long)arg2;
- (id)_updateDominantInfoInCompoundNameInfo:(id)arg1 withRevGeoPlaces:(id)arg2 defaultGeoOrderingSet:(id)arg3 includeAllPlaces:(_Bool)arg4 includeHome:(_Bool)arg5 homeAtEnd:(_Bool)arg6 outOtherNonDominantPlaces:(id)arg7 outOrdersCheckedOrUsed:(id)arg8 outOrderUsed:(unsigned long long *)arg9 outUsedHome:(_Bool *)arg10;
- (void)_updateAllInfoInCompoundNameInfo:(id)arg1 andCompoundSecondaryNameInfo:(id)arg2 withRevGeoPlaces:(id)arg3 includeHome:(_Bool)arg4 primaryGeoOrderingSet:(id)arg5 secondaryGeoOrderingSet:(id)arg6;
- (void)_addOrUpdateNameInfo:(id)arg1 inPlaceInfoMap:(id)arg2;
- (unsigned long long)_indexForGeoOrder:(unsigned long long)arg1 inPrioritySet:(id)arg2;
- (unsigned long long)_geoOrderInPrioritySet:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)_suffixForGeoPlace:(id)arg1 afterOrderType:(unsigned long long)arg2 homePlace:(id)arg3;
- (id)_geoLocationForCoordinate:(CDStruct_c3b9c2ee)arg1 date:(id)arg2;
- (void)_reverseGeocodeMoment:(id)arg1 shouldFilterIfInProgress:(_Bool)arg2 invalidOnly:(_Bool)arg3;
- (void)_finishedProcessingMomentWithUuid:(id)arg1 withSuccess:(_Bool)arg2;
- (_Bool)_startingToProcessMomentWithUuid:(id)arg1;
- (void)_processYearMomentLists;
- (unsigned long long)_processYearMomentList:(id)arg1;
- (void)_processMegaMomentLists;
- (unsigned long long)_processMegaMomentList:(id)arg1;
- (void)_processPendingGEORequests;
- (void)_processNextTransaction;
- (void)_waitForReachability;
- (void)_processNextAnalysisTransaction;
- (void)_analysisComplete;
- (void)_saveDataIfReachedObjectChangeThreshold;
- (void)_saveDataIfNeededAfterTimeDiff:(double)arg1;
- (void)_saveNow;
- (void)_removeKeepAlive;
- (void)_updateKeepAlive;
- (void)_processGEORequestWithRequestInfo:(id)arg1;
- (id)_compactPlaceDescriptionForPlaceResult:(id)arg1;
- (_Bool)_updateHomeLocationInRevGeoInfo:(id)arg1 forLocation:(id)arg2 withHomeLocation:(id)arg3;
- (void)_finalizeDataForMoment:(id)arg1 withMomentLocationInfo:(id)arg2 success:(_Bool)arg3;
- (void)_addRevGeoPlacesFromAssets:(id)arg1 toPlacesArray:(id)arg2;
- (void)_enqueueReverseGeocodeMomentWithRequestInfo:(id)arg1 shouldFilterIfInProgress:(_Bool)arg2;
- (void)_updateErrorStateWithSuccess:(_Bool)arg1 errorType:(unsigned long long)arg2;
- (void)_finishedGEORequestInfo:(id)arg1 withSuccess:(_Bool)arg2 errorType:(unsigned long long)arg3;
- (void)_setErrorState:(unsigned long long)arg1;
- (void)_resetErrorState;
- (void)_addressBookChanged;
- (void)_updateHomeLocation;
- (id)_currentHomeAddressDictionary;
- (id)_addressDictionaryForABRecord:(void *)arg1 identifier:(int)arg2;
- (void)_forwardGeocodeAddressDictionaryOnGeoThread:(id)arg1 withCompletionBlock:(id)arg2;
- (void)_forwardGeocodeAddressDictionary:(id)arg1 withCompletionBlock:(id)arg2;
- (void)_runBlockOnWorkQueue:(id)arg1;
@property(readonly, nonatomic) PLPhotoLibrary *_photoLibrary;
@property(readonly, nonatomic) CLLocation *_homeLocation;
- (id)_currentProviderId;
- (void)_updateInformationForGeoProviderIfNeeded;
- (void)_updateInformationForGeoProviderIfNeededOnWorkQueue;
@property(readonly, nonatomic) void *_addressBook;
- (_Bool)_updateLanguageIfNeeded;
- (_Bool)_updateHomeAddressIfNeeded;
- (id)_locationFromDictionary:(id)arg1;
- (id)_dictionaryFromLocation:(id)arg1;
- (void)_saveGlobalMetadata;
- (id)_metadataPath;
- (void)_fetchServerVersionInfo;
- (void)_updateLocalServerVersionInfo:(id)arg1;
- (_Bool)_markInvalidOutOfDateAssetsInMoment:(id)arg1 forCurrentCountryVersionMap:(id)arg2;
- (_Bool)_loadServerVersionInfo;
- (id)_serverVersionInfoFilePath;
- (void)_updateDateFormattersForLocale:(id)arg1;
- (void)_updateRevGeoServerFetchInfoConfig;
- (void)_finalizeInitOnWorkQueue;
- (void)_checkForNewServerVersionInfoIfNeeded;
- (void)dealloc;
- (id)init;

@end


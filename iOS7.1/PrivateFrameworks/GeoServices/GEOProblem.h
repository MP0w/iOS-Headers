//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class GEOLatLng, GEOMapRegion, GEOPlace, GEOPlaceSearchRequest, GEOPlaceSearchResponse, NSData, NSMutableArray, NSString;

@interface GEOProblem : PBCodable <NSCopying>
{
    CDStruct_3f74b7eb *_featureHandles;
    unsigned int _featureHandlesCount;
    unsigned int _featureHandlesSpace;
    CDStruct_612aec5b _sessionID;
    CDStruct_56d48c16 _curlProblemTypes;
    CDStruct_56d48c16 _pinProblemTypes;
    CDStruct_56d48c16 _problemTypes;
    NSString *_comments;
    NSMutableArray *_correctedFields;
    NSString *_correctedLabelTitle;
    GEOPlace *_correctedPlace;
    GEOLatLng *_correctedPosition;
    NSMutableArray *_directionsProblems;
    NSData *_directionsResponseID;
    GEOMapRegion *_featureRegion;
    NSString *_httpInfo;
    NSString *_incorrectLabelTitle;
    float _mapZoomLevel;
    GEOPlace *_originalPlace;
    GEOLatLng *_pinDrop;
    int _pinType;
    GEOPlaceSearchRequest *_placeSearchRequest;
    GEOPlaceSearchResponse *_placeSearchResponse;
    NSString *_preferredSearchDisplayLocation;
    unsigned int _preferredSearchResultIndex;
    unsigned int _problematicSearchResultIndex;
    GEOMapRegion *_region;
    NSString *_syslog;
    NSString *_tileStateLog;
    NSMutableArray *_viewportImages;
    NSData *_viewportInfo;
    NSMutableArray *_visibleTileSets;
    struct {
        unsigned int sessionID:1;
        unsigned int mapZoomLevel:1;
        unsigned int pinType:1;
        unsigned int preferredSearchResultIndex:1;
        unsigned int problematicSearchResultIndex:1;
    } _has;
}

@property(retain, nonatomic) NSString *preferredSearchDisplayLocation; // @synthesize preferredSearchDisplayLocation=_preferredSearchDisplayLocation;
@property(nonatomic) unsigned int preferredSearchResultIndex; // @synthesize preferredSearchResultIndex=_preferredSearchResultIndex;
@property(nonatomic) unsigned int problematicSearchResultIndex; // @synthesize problematicSearchResultIndex=_problematicSearchResultIndex;
@property(retain, nonatomic) NSMutableArray *directionsProblems; // @synthesize directionsProblems=_directionsProblems;
@property(retain, nonatomic) GEOMapRegion *featureRegion; // @synthesize featureRegion=_featureRegion;
@property(retain, nonatomic) NSString *correctedLabelTitle; // @synthesize correctedLabelTitle=_correctedLabelTitle;
@property(retain, nonatomic) NSString *incorrectLabelTitle; // @synthesize incorrectLabelTitle=_incorrectLabelTitle;
@property(retain, nonatomic) NSString *tileStateLog; // @synthesize tileStateLog=_tileStateLog;
@property(retain, nonatomic) NSString *syslog; // @synthesize syslog=_syslog;
@property(nonatomic) int pinType; // @synthesize pinType=_pinType;
@property(retain, nonatomic) NSData *directionsResponseID; // @synthesize directionsResponseID=_directionsResponseID;
@property(retain, nonatomic) GEOPlaceSearchResponse *placeSearchResponse; // @synthesize placeSearchResponse=_placeSearchResponse;
@property(retain, nonatomic) GEOPlaceSearchRequest *placeSearchRequest; // @synthesize placeSearchRequest=_placeSearchRequest;
@property(retain, nonatomic) GEOLatLng *correctedPosition; // @synthesize correctedPosition=_correctedPosition;
@property(retain, nonatomic) NSMutableArray *correctedFields; // @synthesize correctedFields=_correctedFields;
@property(retain, nonatomic) GEOLatLng *pinDrop; // @synthesize pinDrop=_pinDrop;
@property(retain, nonatomic) NSData *viewportInfo; // @synthesize viewportInfo=_viewportInfo;
@property(retain, nonatomic) NSMutableArray *viewportImages; // @synthesize viewportImages=_viewportImages;
@property(retain, nonatomic) NSMutableArray *visibleTileSets; // @synthesize visibleTileSets=_visibleTileSets;
@property(nonatomic) float mapZoomLevel; // @synthesize mapZoomLevel=_mapZoomLevel;
@property(retain, nonatomic) GEOMapRegion *region; // @synthesize region=_region;
@property(retain, nonatomic) NSString *httpInfo; // @synthesize httpInfo=_httpInfo;
@property(retain, nonatomic) NSString *comments; // @synthesize comments=_comments;
@property(retain, nonatomic) GEOPlace *correctedPlace; // @synthesize correctedPlace=_correctedPlace;
@property(nonatomic) CDStruct_612aec5b sessionID; // @synthesize sessionID=_sessionID;
@property(retain, nonatomic) GEOPlace *originalPlace; // @synthesize originalPlace=_originalPlace;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasPreferredSearchDisplayLocation;
@property(nonatomic) BOOL hasPreferredSearchResultIndex;
@property(nonatomic) BOOL hasProblematicSearchResultIndex;
- (id)directionsProblemsAtIndex:(unsigned int)arg1;
- (unsigned int)directionsProblemsCount;
- (void)addDirectionsProblems:(id)arg1;
- (void)clearDirectionsProblems;
- (void)setFeatureHandles:(CDStruct_3f74b7eb *)arg1 count:(unsigned int)arg2;
- (CDStruct_3f74b7eb)featureHandleAtIndex:(unsigned int)arg1;
- (void)addFeatureHandle:(CDStruct_3f74b7eb)arg1;
- (void)clearFeatureHandles;
@property(readonly, nonatomic) CDStruct_3f74b7eb *featureHandles;
@property(readonly, nonatomic) unsigned int featureHandlesCount;
@property(readonly, nonatomic) BOOL hasFeatureRegion;
@property(readonly, nonatomic) BOOL hasCorrectedLabelTitle;
@property(readonly, nonatomic) BOOL hasIncorrectLabelTitle;
@property(readonly, nonatomic) BOOL hasTileStateLog;
@property(readonly, nonatomic) BOOL hasSyslog;
@property(nonatomic) BOOL hasPinType;
@property(readonly, nonatomic) BOOL hasDirectionsResponseID;
@property(readonly, nonatomic) BOOL hasPlaceSearchResponse;
@property(readonly, nonatomic) BOOL hasPlaceSearchRequest;
@property(readonly, nonatomic) BOOL hasCorrectedPosition;
- (id)correctedFieldAtIndex:(unsigned int)arg1;
- (unsigned int)correctedFieldsCount;
- (void)addCorrectedField:(id)arg1;
- (void)clearCorrectedFields;
- (void)setCurlProblemTypes:(int *)arg1 count:(unsigned int)arg2;
- (int)curlProblemTypeAtIndex:(unsigned int)arg1;
- (void)addCurlProblemType:(int)arg1;
- (void)clearCurlProblemTypes;
@property(readonly, nonatomic) int *curlProblemTypes;
@property(readonly, nonatomic) unsigned int curlProblemTypesCount;
- (void)setPinProblemTypes:(int *)arg1 count:(unsigned int)arg2;
- (int)pinProblemTypeAtIndex:(unsigned int)arg1;
- (void)addPinProblemType:(int)arg1;
- (void)clearPinProblemTypes;
@property(readonly, nonatomic) int *pinProblemTypes;
@property(readonly, nonatomic) unsigned int pinProblemTypesCount;
@property(readonly, nonatomic) BOOL hasPinDrop;
@property(readonly, nonatomic) BOOL hasViewportInfo;
- (id)viewportImagesAtIndex:(unsigned int)arg1;
- (unsigned int)viewportImagesCount;
- (void)addViewportImages:(id)arg1;
- (void)clearViewportImages;
- (id)visibleTileSetAtIndex:(unsigned int)arg1;
- (unsigned int)visibleTileSetsCount;
- (void)addVisibleTileSet:(id)arg1;
- (void)clearVisibleTileSets;
@property(nonatomic) BOOL hasMapZoomLevel;
@property(readonly, nonatomic) BOOL hasRegion;
@property(readonly, nonatomic) BOOL hasHttpInfo;
@property(readonly, nonatomic) BOOL hasComments;
@property(readonly, nonatomic) BOOL hasCorrectedPlace;
- (void)setProblemTypes:(int *)arg1 count:(unsigned int)arg2;
- (int)problemTypeAtIndex:(unsigned int)arg1;
- (void)addProblemType:(int)arg1;
- (void)clearProblemTypes;
@property(readonly, nonatomic) int *problemTypes;
@property(readonly, nonatomic) unsigned int problemTypesCount;
@property(nonatomic) BOOL hasSessionID;
@property(readonly, nonatomic) BOOL hasOriginalPlace;
- (void)dealloc;

@end

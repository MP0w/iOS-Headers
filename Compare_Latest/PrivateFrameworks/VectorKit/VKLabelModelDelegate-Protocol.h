//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class VKLabelMarker, VKLabelModel, VKMapTile, VKTile;

@protocol VKLabelModelDelegate
- (void)labelModel:(VKLabelModel *)arg1 selectedLabelMarkerWillDisappear:(VKLabelMarker *)arg2;
- (VKMapTile *)labelModel:(VKLabelModel *)arg1 mapTileForTile:(VKTile *)arg2 layer:(unsigned long long)arg3;
@end


/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSDStyledDrawableEditor.h>

#import "TSDInfoImporterDelegate-Protocol.h"

@class NSSet, TSDMediaInfo;

// Not exported
@interface TSDMediaEditor : TSDStyledDrawableEditor <TSDInfoImporterDelegate>
{
}

- (_Bool)p_allSelectedInfosArePlaceholders;
- (void)makeCurrentSelectionPlaceholder:(id)arg1;
- (void)infoImporter:(id)arg1 needsMoviePlayabilityOnAllDevicesRequirementUsingBlock:(id)arg2;
- (void)replaceSelectedMediaWithFileAtURL:(id)arg1;
- (void)showMediaReplaceUI:(id)arg1;
- (void)resetSelectionToNaturalDataSize:(id)arg1;
- (void)resetSelectionToInsertedSize:(id)arg1;
- (void)p_resetSelectionToInsertedSize:(int)arg1;
- (int)canPerformEditorAction:(SEL)arg1 withSender:(id)arg2;
- (id)selectedObjectsSupportingOpacity;
@property(readonly, nonatomic) TSDMediaInfo *firstMediaInfo;
@property(readonly, nonatomic) NSSet *mediaInfos;

@end


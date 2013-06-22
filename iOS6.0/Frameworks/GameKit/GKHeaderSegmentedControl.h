/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIControl.h"

@class NSArray, UIImageView;

@interface GKHeaderSegmentedControl : UIControl
{
    unsigned int _selectedSegment;
    id <GKHeaderSegmentedControlDelegate> _delegate;
    unsigned int _selectedSegmentIndex;
    NSArray *_labels;
    NSArray *_abbreviatedLabels;
    int _segmentedControlStyle;
    int _segmentWidthAllocationStyle;
    CDStruct_1b326cfb *_segmentNodes;
    SEL _themeBackgroundImageSelector;
    SEL _themeSelectionImageSelector;
    SEL _themeDividerImageSelector;
    SEL _themeFontSelector;
    SEL _secondaryFontSelector;
    SEL _themeSelectedTextColorSelector;
    SEL _themeNormalTextColorSelector;
    SEL _themeSecondaryTextColorSelector;
    SEL _themeTextShadowColorSelector;
    SEL _themeTextSelectedShadowColorSelector;
    SEL _segmentLayoutSelector;
    float _dividerOffsetY;
    float _calculatedFontSize;
    float _minFontSizeDelta;
    float _textBaselineNudgeY;
    struct UIEdgeInsets _selectionInsets;
    float _textPaddingWidth;
    struct UIEdgeInsets _capInsets;
    NSArray *_processedLabels;
    UIImageView *_backgroundView;
    UIImageView *_foregroundView;
    float _maxWidth;
}

@property(nonatomic) float maxWidth; // @synthesize maxWidth=_maxWidth;
@property(retain, nonatomic) UIImageView *foregroundView; // @synthesize foregroundView=_foregroundView;
@property(retain, nonatomic) UIImageView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) NSArray *processedLabels; // @synthesize processedLabels=_processedLabels;
@property(nonatomic) struct UIEdgeInsets capInsets; // @synthesize capInsets=_capInsets;
@property(nonatomic) float textPaddingWidth; // @synthesize textPaddingWidth=_textPaddingWidth;
@property(nonatomic) struct UIEdgeInsets selectionInsets; // @synthesize selectionInsets=_selectionInsets;
@property(nonatomic) float textBaselineNudgeY; // @synthesize textBaselineNudgeY=_textBaselineNudgeY;
@property(nonatomic) float minFontSizeDelta; // @synthesize minFontSizeDelta=_minFontSizeDelta;
@property(nonatomic) float calculatedFontSize; // @synthesize calculatedFontSize=_calculatedFontSize;
@property(nonatomic) float dividerOffsetY; // @synthesize dividerOffsetY=_dividerOffsetY;
@property(nonatomic) SEL segmentLayoutSelector; // @synthesize segmentLayoutSelector=_segmentLayoutSelector;
@property(nonatomic) SEL themeTextSelectedShadowColorSelector; // @synthesize themeTextSelectedShadowColorSelector=_themeTextSelectedShadowColorSelector;
@property(nonatomic) SEL themeTextShadowColorSelector; // @synthesize themeTextShadowColorSelector=_themeTextShadowColorSelector;
@property(nonatomic) SEL themeSecondaryTextColorSelector; // @synthesize themeSecondaryTextColorSelector=_themeSecondaryTextColorSelector;
@property(nonatomic) SEL themeNormalTextColorSelector; // @synthesize themeNormalTextColorSelector=_themeNormalTextColorSelector;
@property(nonatomic) SEL themeSelectedTextColorSelector; // @synthesize themeSelectedTextColorSelector=_themeSelectedTextColorSelector;
@property(nonatomic) SEL themeSecondaryFontSelector; // @synthesize themeSecondaryFontSelector=_secondaryFontSelector;
@property(nonatomic) SEL themeFontSelector; // @synthesize themeFontSelector=_themeFontSelector;
@property(nonatomic) SEL themeDividerImageSelector; // @synthesize themeDividerImageSelector=_themeDividerImageSelector;
@property(nonatomic) SEL themeSelectionImageSelector; // @synthesize themeSelectionImageSelector=_themeSelectionImageSelector;
@property(nonatomic) SEL themeBackgroundImageSelector; // @synthesize themeBackgroundImageSelector=_themeBackgroundImageSelector;
@property(nonatomic) CDStruct_1b326cfb *segmentNodes; // @synthesize segmentNodes=_segmentNodes;
@property(nonatomic) int segmentWidthAllocationStyle; // @synthesize segmentWidthAllocationStyle=_segmentWidthAllocationStyle;
@property(nonatomic) int segmentedControlStyle; // @synthesize segmentedControlStyle=_segmentedControlStyle;
@property(retain, nonatomic) NSArray *abbreviatedLabels; // @synthesize abbreviatedLabels=_abbreviatedLabels;
@property(retain, nonatomic) NSArray *labels; // @synthesize labels=_labels;
@property(nonatomic) id <GKHeaderSegmentedControlDelegate> delegate; // @synthesize delegate=_delegate;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
@property(readonly, nonatomic) float defaultHeight; // @dynamic defaultHeight;
- (void)drawForegroundInRect:(struct CGRect)arg1;
- (void)setNeedsLayout;
- (void)enumerateSegmentContentRectsUsingBlock:(id)arg1;
- (void)layoutSubviews;
@property(readonly, nonatomic) struct CGRect segmentBounds;
- (id)largeRibbonBackgroundImageForRect:(struct CGRect)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)clearLayoutCache;
- (float)dividerWidth;
- (id)dividerImage;
- (void)drawLabelTextAtIndex:(int)arg1 inRect:(struct CGRect)arg2;
- (void)layoutSegmentsProportionally:(CDStruct_1b326cfb *)arg1 number:(int)arg2;
- (void)layoutSegmentsEnlargingCenter:(CDStruct_1b326cfb *)arg1 number:(int)arg2;
- (void)layoutSegmentsEqually:(CDStruct_1b326cfb *)arg1 number:(int)arg2;
@property(nonatomic) unsigned int selectedSegmentIndex; // @synthesize selectedSegmentIndex=_selectedSegmentIndex;
- (void)_tap:(id)arg1;
- (void)applyCalculatedFontSize;
- (void)invalidateProcessedLabels;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

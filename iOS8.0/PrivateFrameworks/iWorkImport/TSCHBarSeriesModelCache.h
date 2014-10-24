//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TSCHChartAxis, TSCHChartSeries, TSCHChartValueAxis, TSDShadow, TSDStroke, TSWPParagraphStyle;

__attribute__((visibility("hidden")))
@interface TSCHBarSeriesModelCache : NSObject
{
    TSCHChartSeries *mSeries;
    TSCHChartValueAxis *mValueAxis;
    TSCHChartAxis *mGroupAxis;
    TSWPParagraphStyle *mParagraphStyle;
    unsigned int mSeriesIndex;
    BOOL mValueLabelsOn;
    float mBarWidthRatio;
    float mBarGroupGapRatio;
    float mBarGapRatio;
    double mUnitSpaceIntercept;
    unsigned int mLabelPosition;
    TSDShadow *mShadow;
    TSDStroke *mStroke;
    id mFill;
    float mOpacity;
}

@property(readonly) float opacity; // @synthesize opacity=mOpacity;
@property(readonly) id fill; // @synthesize fill=mFill;
@property(readonly) TSDStroke *stroke; // @synthesize stroke=mStroke;
@property(readonly) TSDShadow *shadow; // @synthesize shadow=mShadow;
@property(readonly) unsigned int labelPosition; // @synthesize labelPosition=mLabelPosition;
@property(readonly) double unitSpaceIntercept; // @synthesize unitSpaceIntercept=mUnitSpaceIntercept;
@property(readonly) float barGapRatio; // @synthesize barGapRatio=mBarGapRatio;
@property(readonly) float barGroupGapRatio; // @synthesize barGroupGapRatio=mBarGroupGapRatio;
@property(readonly) float barWidthRatio; // @synthesize barWidthRatio=mBarWidthRatio;
@property(readonly) BOOL valueLabelsOn; // @synthesize valueLabelsOn=mValueLabelsOn;
@property(readonly) TSWPParagraphStyle *paragraphStyle; // @synthesize paragraphStyle=mParagraphStyle;
@property(readonly) TSCHChartAxis *groupAxis; // @synthesize groupAxis=mGroupAxis;
@property(readonly) TSCHChartValueAxis *valueAxis; // @synthesize valueAxis=mValueAxis;
@property(readonly) unsigned int seriesIndex; // @synthesize seriesIndex=mSeriesIndex;
@property(readonly) TSCHChartSeries *series; // @synthesize series=mSeries;
- (void)dealloc;
- (id)initWithChartModel:(id)arg1 forSeries:(unsigned int)arg2;

@end

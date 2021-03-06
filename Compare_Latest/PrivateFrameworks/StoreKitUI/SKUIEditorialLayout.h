//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SKUIEditorialComponent, SKUILayoutCache;

@interface SKUIEditorialLayout : NSObject
{
    SKUIEditorialComponent *_editorial;
    int _landscapeLinkLayoutIndex;
    int _landscapeTextLayoutIndex;
    int _landscapeTitleLayoutIndex;
    float _landscapeWidth;
    int _portraitLinkLayoutIndex;
    int _portraitTextLayoutIndex;
    int _portraitTitleLayoutIndex;
    float _portraitWidth;
    SKUILayoutCache *_textLayoutCache;
}

@property(readonly, nonatomic) SKUIEditorialComponent *editorialComponent; // @synthesize editorialComponent=_editorial;
- (void).cxx_destruct;
- (id)_titleTextLayoutRequestWithTotalWidth:(float)arg1;
- (id)_linkLayoutRequestWithTotalWidth:(float)arg1;
- (id)_bodyTextLayoutRequestWithTotalWidth:(float)arg1;
- (id)titleTextLayoutForOrientation:(int)arg1;
- (void)setLayoutWidth:(float)arg1 forOrientation:(int)arg2;
- (id)linkLayoutForOrientation:(int)arg1;
- (void)enqueueLayoutRequests;
- (float)layoutHeightForOrientation:(int)arg1 expanded:(BOOL)arg2;
- (id)bodyTextLayoutForOrientation:(int)arg1;
- (id)initWithEditorial:(id)arg1 layoutCache:(id)arg2;

@end


/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSDictionary.h"

@class NSMutableDictionary, NSMutableSet;

@interface WebElementDictionary : NSDictionary
{
    struct HitTestResult *_result;
    NSMutableDictionary *_cache;
    NSMutableSet *_nilValues;
    BOOL _cacheComplete;
}

+ (void)initialize;
+ (void)initializeLookupTable;
- (id)initWithHitTestResult:(const struct HitTestResult *)arg1;
- (void)dealloc;
- (void)finalize;
- (void)_fillCache;
- (unsigned int)count;
- (id)keyEnumerator;
- (id)objectForKey:(id)arg1;
- (id)_domNode;
- (id)_webFrame;
- (id)_altDisplayString;
- (id)_spellingToolTip;
- (id)_image;
- (id)_imageRect;
- (id)_absoluteImageURL;
- (id)_absoluteMediaURL;
- (id)_isSelected;
- (id)_title;
- (id)_absoluteLinkURL;
- (id)_targetWebFrame;
- (id)_titleDisplayString;
- (id)_textContent;
- (id)_isLiveLink;
- (id)_isContentEditable;
- (id)_isInScrollBar;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSMutableDictionary.h"

__attribute__((visibility("hidden")))
@interface _NSNestedDictionary : NSMutableDictionary
{
    id _locals;
    id _bindings;
}

- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectEnumerator;
- (id)keyEnumerator;
- (id)objectForKey:(id)arg1;
- (unsigned int)count;
- (id)_recursiveAllValues;
- (id)_recursiveAllKeys;

@end

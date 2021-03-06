/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Preferences/PSViewController.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class UITableView;

@interface PSMovableListController : PSViewController <UITableViewDelegate, UITableViewDataSource>
{
    UITableView *_tableView;
    struct __CFArray *_ordering;
    struct __CFSet *_disabledDomains;
    BOOL _isDirty;
}

- (struct __CFString *)reorderingKey;
- (struct __CFString *)disabledKey;
- (struct __CFString *)defaultDomain;
- (id)allDomainKeys;
- (int)domainForKey:(const id)arg1;
- (int)domainCount;
- (id)keyForDomain:(int)arg1;
- (void)defaultOrdering;
- (void)removeUnwantedDomains;
- (id)displayNameForExtendedDomain:(int)arg1;
- (void)_loadOrdering;
- (void)_loadEnabledState;
- (id)init;
- (id)stringForDomain:(int)arg1;
- (int)domainForIndexRow:(unsigned int)arg1;
- (void)_saveIfNecessary;
- (void)viewWillDisappear:(BOOL)arg1;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)_updateCell:(id)arg1 forDomain:(int)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)dealloc;

@end


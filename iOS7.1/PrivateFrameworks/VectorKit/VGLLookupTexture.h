//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <VectorKit/VGLTexture.h>

__attribute__((visibility("hidden")))
@interface VGLLookupTexture : VGLTexture
{
    char *_data;
}

- (BOOL)loadTexture;
- (void)dealloc;
- (id)initWithData:(const float *)arg1 size:(struct CGSize)arg2;

@end


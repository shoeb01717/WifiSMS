/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */



@interface GQDBezierPath : GQDPath <GQDNameMappable>
{
    struct CGPath { } *mPath;
    char *mPathStr;
    BOOL mHasVFlip;
    BOOL mVFlip;
    BOOL mHasHFlip;
    BOOL mHFlip;
}

+ (const struct StateSpec { int (**x1)(); char *x2; NSInteger x3; NSInteger x4; struct Action {} *x5; int (*x6)(); int (*x7)(); int (*x8)(); struct ActionFinder {} *x9; }*)stateForReading;
+ (struct __CFString { }*)createCFStringFromPath:(struct CGPath { }*)arg1;
+ (struct CGPath { }*)createPathFromCString:(const char *)arg1;

- (id)initWithPathString:(const char *)arg1;
- (void)dealloc;
- (BOOL)isRectangular;
- (struct CGPath { }*)path;
- (char *)pathStr;
- (struct CGPath { }*)createBezierPath;
- (BOOL)hasVerticalFlip;
- (BOOL)hasHorizontalFlip;
- (BOOL)verticalFlip;
- (BOOL)horizontalFlip;
- (NSInteger)readAttributesFromReader:(struct _xmlTextReader { }*)arg1 processor:(id)arg2;

@end

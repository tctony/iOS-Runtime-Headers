/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@class NSMutableArray;

@interface NSTextStorage : NSMutableAttributedString {
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    struct { 
        unsigned int editedMask : 8; 
        unsigned int  : 8; 
        unsigned int disabled : 16; 
    int _editedDelta;
    } _editedRange;
    } _flags;
    NSMutableArray *_layoutManagers;
    id _sideData;
}

+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (BOOL)_forceFixAttributes;
- (BOOL)_isEditing;
- (BOOL)_lockForReading;
- (BOOL)_lockForWriting;
- (BOOL)_lockForWritingWithExceptionHandler:(BOOL)arg1;
- (void)_notifyEdited:(unsigned int)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 changeInLength:(int)arg3 invalidatedRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg4;
- (struct _NSRange { unsigned int x1; unsigned int x2; })_rangeByEstimatingAttributeFixingForRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)_setForceFixAttributes:(BOOL)arg1;
- (void)_unlock;
- (void)addLayoutManager:(id)arg1;
- (void)beginEditing;
- (int)changeInLength;
- (Class)classForCoder;
- (void)dealloc;
- (id)delegate;
- (void)edited:(unsigned int)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 changeInLength:(int)arg3;
- (unsigned int)editedMask;
- (struct _NSRange { unsigned int x1; unsigned int x2; })editedRange;
- (void)encodeWithCoder:(id)arg1;
- (void)endEditing;
- (void)ensureAttributesAreFixedInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)finalize;
- (BOOL)fixesAttributesLazily;
- (void)fontSetChanged;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)invalidateAttributesInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (id)layoutManagers;
- (void)processEditing;
- (void)removeLayoutManager:(id)arg1;
- (void)setDelegate:(id)arg1;

@end

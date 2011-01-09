/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class PDTransitionOptions;



@interface PDTransition : OADProperties 
{
    BOOL mHasType;
    NSInteger mType;
    BOOL mHasSpeed;
    NSInteger mSpeed;
    BOOL mHasAdvanceOnClick;
    BOOL mIsAdvanceOnClick;
    BOOL mHasAdvanceAfterTime;
    NSInteger mAdvanceAfterTime;
    PDTransitionOptions *mOptions;
}


- (BOOL)hasIsAdvanceOnClick;
- (BOOL)isAdvanceOnClick;
- (BOOL)hasSpeed;
- (BOOL)hasAdvanceAfterTime;
- (NSInteger)advanceAfterTime;
- (BOOL)hasTransitionOptions;
- (void)setIsAdvanceOnClick:(BOOL)arg1;
- (void)setAdvanceAfterTime:(NSInteger)arg1;
- (void)setOptions:(id)arg1;
- (BOOL)hasType;
- (id)options;
- (NSInteger)type;
- (void)setType:(NSInteger)arg1;
- (NSInteger)speed;
- (id)init;
- (void)dealloc;
- (void)setSpeed:(NSInteger)arg1;

@end
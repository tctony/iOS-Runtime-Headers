/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OADTableCellBorderStyle, OADFill;



@interface OADTableCellStyle : NSObject 
{
    OADTableCellBorderStyle *mBorderStyle;
    OADFill *mFill;
}

+ (id)defaultFill;
+ (id)defaultStyle;

- (id)shallowCopy;
- (void)applyOverridesFrom:(id)arg1;
- (void)setFill:(id)arg1;
- (void)setBorderStyle:(id)arg1;
- (id)borderStyle;
- (id)fill;
- (void)dealloc;

@end
/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOSearchSubstring : PBCodable {
    int _beginIndex;
    int _endIndex;
    int _stringType;
}

@property int beginIndex;
@property int endIndex;
@property int stringType;

- (int)beginIndex;
- (void)copyTo:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (int)endIndex;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setBeginIndex:(int)arg1;
- (void)setEndIndex:(int)arg1;
- (void)setStringType:(int)arg1;
- (int)stringType;
- (void)writeTo:(id)arg1;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class MKMapSnapshotRequest, NSLock, NSMutableArray, NSString, UIImage;

@interface MKMapSnapshotCreator : NSObject <MKMapViewDelegate> {
    NSString *_lastAttributionString;
    UIImage *_lastSnapshot;
    NSLock *_requestLock;
    NSMutableArray *_requests;
    MKMapSnapshotRequest *_servingRequest;
}

@property(retain) MKMapSnapshotRequest * servingRequest;

- (id)_newSnapshotWithView:(id)arg1;
- (void)_processRequest;
- (void)_respondWithSnapshot;
- (void)createSnapShotWithCoordinate:(struct { double x1; double x2; })arg1 zoomLevel:(unsigned int)arg2 size:(struct CGSize { float x1; float x2; })arg3 handler:(id)arg4;
- (void)createSnapShotWithCoordinate:(struct { double x1; double x2; })arg1 zoomLevel:(unsigned int)arg2 size:(struct CGSize { float x1; float x2; })arg3 requester:(id)arg4 context:(id)arg5;
- (void)dealloc;
- (void)flushRequestQueue;
- (id)init;
- (id)recreateCurrentSnapshotWithRequester:(id)arg1 context:(id)arg2;
- (id)servingRequest;
- (void)setServingRequest:(id)arg1;

@end

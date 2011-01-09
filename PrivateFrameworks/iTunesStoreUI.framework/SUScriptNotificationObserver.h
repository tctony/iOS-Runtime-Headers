/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSLock;



@interface SUScriptNotificationObserver : NSObject 
{
    NSLock *_lock;
    struct __CFSet { } *_receivers;
}


- (void)_networkTypeChangedNotification:(id)arg1;
- (void)_softwareMapChangedNotification:(id)arg1;
- (void)_beginObservingNotifications;
- (void)_dispatchEvent:(id)arg1 forName:(id)arg2;
- (void)_endObservingNotifications;
- (void)_memoryWarningNotification:(id)arg1;
- (void)addEventReceiver:(id)arg1;
- (void)removeEventReceiver:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)_restrictionsChangedNotification:(id)arg1;

@end
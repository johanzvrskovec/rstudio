

#import <Cocoa/Cocoa.h>
#import <Webkit/WebKit.h>

@interface WebViewController : NSWindowController<NSWindowDelegate> {
   WebView* webView_;
}
// The designated initializer
- (id)initWithURLRequest: (NSURLRequest*) request;

// Get the embedded WebView
- (WebView*) webView;

// subclass methods for registering javascript callbacks
- (void) registerDesktopObject;
- (void) registerDesktopMenuCallbackObject;
@end


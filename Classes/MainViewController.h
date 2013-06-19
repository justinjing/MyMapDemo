
#import "ParkPlaceMark.h"
#import <MapKit/MapKit.h>
#import <MapKit/MKReverseGeocoder.h>
#import <CoreLocation/CoreLocation.h>

@interface MainViewController : UIViewController < MKMapViewDelegate, CLLocationManagerDelegate> {
	MKMapView *mapView;
	MKPlacemark *mPlacemark;
	CLLocationCoordinate2D location;
	IBOutlet UIButton *mStoreLocationButton;
    IBOutlet NSString *strLatitude;
	IBOutlet NSString *strLongitude;
    CLLocationManager  *locmanager; 
	BOOL wasFound;
}

@property(nonatomic,retain) IBOutlet UIButton *mStoreLocationButton;
@property (nonatomic,retain) NSString *strLatitude;
@property (nonatomic,retain) NSString *strLongitude;


- (void)showInfoOfMap;
- (IBAction)update;
- (void)showParking:(BOOL) b;
- (IBAction)storeLocationInfo:(id) sender;
@end

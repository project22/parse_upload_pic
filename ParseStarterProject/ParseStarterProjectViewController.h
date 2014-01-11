#import <Parse/Parse.h>


@interface ParseStarterProjectViewController : UIViewController <UITextFieldDelegate,UIImagePickerControllerDelegate,UINavigationControllerDelegate>




@property BOOL newMedia;
@property (strong, nonatomic) IBOutlet UIImageView *imageView;
- (IBAction)useCamera:(id)sender;
- (IBAction)useCameraRoll:(id)sender;

@property (unsafe_unretained, nonatomic) IBOutlet UITextField *nameInput;
- (IBAction)addNameButton:(id)sender;
@property UIImage *chosenImage;

@end

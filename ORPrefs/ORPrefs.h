#import "../Orangered.h"
#import <UIKit/UITableViewCell+Private.h>
#import <UIKit/UIImage+Private.h>
#import <Twitter/Twitter.h>
#import <ToneLibrary/ToneLibrary.h>
#import <MobileInstallation/MobileInstallation.h>
#import <Preferences/Preferences.h>
// #import <ToneKit/ToneKit.h>
#import <AppList/AppList.h>
#import <Cephei/HBPreferences.h>
#import <Cephei/prefs/HBRootListController.h>
#import <Cephei/prefs/HBListController.h>
#import <Cephei/prefs/HBListItemsController.h>

@interface ORListController : HBRootListController

@property (strong, nonatomic) HBPreferences *preferences;

@property (strong, nonatomic) NSMutableArray *savedClientTitles, *savedClientValues;

@property (strong, nonatomic) PSTableCell *soundCell;

- (void)reloadClientTitlesAndValues;

@end

@interface OREditTextCell : PSEditableTableCell

@end

@interface OREditDoneTextCell : PSEditableTableCell

@end


@interface ORCreditsCell : PSTableCell <UITextViewDelegate> {
	UITextView *_plainTextView;
}

@end

@interface ORClientListItemsController : HBListItemsController

@end

@interface ORRingtoneController : ToneController // TKTonePickerViewController

@end

@interface ORLinkCell : PSTableCell

@end

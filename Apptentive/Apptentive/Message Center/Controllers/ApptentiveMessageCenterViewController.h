//
//  ApptentiveMessageCenterViewController.h
//  Apptentive
//
//  Created by Frank Schmitt on 5/20/15.
//  Copyright (c) 2015 Apptentive, Inc. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ApptentiveMessageCenterViewModel.h"

@class ApptentiveMessageCenterInteraction;
@class ApptentiveInteractionController;


@interface ApptentiveMessageCenterViewController : UITableViewController <ApptentiveMessageCenterViewModelDelegate, UITextViewDelegate, UITextFieldDelegate, UICollectionViewDataSource, UICollectionViewDelegate>

@property (strong, nonatomic) ApptentiveMessageCenterViewModel *viewModel;

// This strong reference makes sure the interaction controller sticks around
// until the view controller is dismissed (required for
// `-dismissAllInteractions:` calls).
@property (strong, nonatomic) ApptentiveInteractionController *interactionController;

@end
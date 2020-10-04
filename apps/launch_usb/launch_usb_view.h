#ifndef APPS_LAUNCH_USB_VIEW_H
#define APPS_LAUNCH_USB_VIEW_H

#include <escher.h>

namespace LaunchUSB {

class LaunchUsbView : public View {
public:
  LaunchUsbView();
  void reload();
  int numberOfSubviews() const override;
  View * subviewAtIndex(int index) override;
  void updateText();
private:
  void layoutSubviews(bool force = false) override;
  BufferTextView m_bufferTextView;
};

}

#endif
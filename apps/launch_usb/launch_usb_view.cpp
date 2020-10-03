#include "launch_usb_view.h"
#include "apps/i18n.h"

namespace LaunchUSB {

LaunchUsbView::LaunchUsbView() :
  View(),
  m_bufferTextView(KDFont::LargeFont, 0.5, 0.5, KDColorBlack)
{
  m_bufferTextView.setText(I18n::translate(I18n::Message::PressEnter));
}

void LaunchUsbView::reload() {
  markRectAsDirty(bounds());
}

int LaunchUsbView::numberOfSubviews() const {
  return 1;
}

View * LaunchUsbView::subviewAtIndex(int index) {
  return &m_bufferTextView;
}

void LaunchUsbView::layoutSubviews(bool force) {
  m_bufferTextView.setFrame(KDRect(0, 0, bounds().width(), bounds().height()), force);
}

}
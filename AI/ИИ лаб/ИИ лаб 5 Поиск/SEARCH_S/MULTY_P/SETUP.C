void setup()
{
  assert_flight("New York","Chicago",1000);
  assert_flight("Chicago","Denver",1000);
  assert_flight("New York","Toronto",800);
  assert_flight("New York","Denver",1900);
  assert_flight("Toronto","Calgary",1500);
  assert_flight("Toronto","Los Angeles",1800);
  assert_flight("Toronto","Chicago",500);
  assert_flight("Denver","Urbana",1000);
  assert_flight("Denver","Houston",1500);
  assert_flight("Houston","Los Angeles",1500);
  assert_flight("Denver","Los Angeles",1000);

  assert_flight("�.-������","��᪢�",640);
  assert_flight("�.-������","����",480);
  assert_flight("����","����",410);
  assert_flight("��᪢�","����",660);
  assert_flight("��᪢�","���쪮�", 650);
  assert_flight("����","���쪮�",740);
  assert_flight("����","����",440);
  assert_flight("��᪢�","����",740);
  assert_flight("����","���쪮�",410);
  assert_flight("����","�좮�",470);
  assert_flight("����","�����",450);
  assert_flight("�좮�","�����",620);
  assert_flight("����","����ய���",660);
  assert_flight("����","����ய��஢�",390);
  assert_flight("���쪮�","�����",560);
  assert_flight("���쪮�","����ய���",580);
  assert_flight("���쪮�","�����",250);
  assert_flight("�����","����ய���",440);
  assert_flight("����ய��஢�","����ய���",400);
  assert_flight("�����","����ய���",320);
  assert_flight("����ய���","�����",320);
  return;
  }

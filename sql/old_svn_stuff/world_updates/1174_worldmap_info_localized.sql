-- --------------------------------------------------------

--
-- Table structure for table `worldmap_info_localized`
--

CREATE TABLE IF NOT EXISTS `worldmap_info_localized` (
  `entry` int(11) NOT NULL,
  `language_code` varchar(5) NOT NULL,
  `text` varchar(255) CHARACTER SET utf8 COLLATE utf8_unicode_ci NOT NULL,
  PRIMARY KEY (`entry`)
) ENGINE=MyISAM DEFAULT CHARSET=latin1;

--
-- Dumping data for table `worldmap_info_localized`
--
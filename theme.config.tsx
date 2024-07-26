import React from 'react';
import { DocsThemeConfig } from 'nextra-theme-docs';

const config: DocsThemeConfig = {
  logo: <span>Cyera App</span>,
  project: {
    link: 'C:\\Users\\HP\\OneDrive\\Desktop\\cyera-gibit-docs',
  },
  chat: {
    link: 'C:\\Users\\HP\\OneDrive\\Desktop\\cyera-gibit-docs',
  },
  docsRepositoryBase: 'C:\\Users\\HP\\OneDrive\\Desktop\\cyera-gibit-docs',
  footer: {
    text: 'Cyera Gibit Corp',
  },
  sidebar: {
    defaultMenuCollapseLevel: 1,
  },
  darkMode: true,
  head: (
    <>
      <meta name="viewport" content="width=device-width, initial-scale=1.0" />
      <meta name="description" content="Cyera App Documentation" />
      <meta name="og:title" content="Cyera App Documentation" />
    </>
  ),
  useNextSeoProps() {
    return {
      titleTemplate: '%s'
    }
  },
};

export default config;
